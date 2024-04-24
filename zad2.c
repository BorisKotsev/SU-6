#include <stdio.h>

typedef struct
{
    char m_name[10];
    float m_price;
    int m_productId;
}Product;

typedef struct
{
    char m_address[10];
    int m_orderId;
}Order;

Product products[1000];
int productCount = 0;

Order orders[1000];
int orderCount = 0;

void addProduct(char name[], float price, int productId)
{
    strcpy(products[productCount].m_name, name);
    products[productCount].m_price = price;
    products[productCount].m_productId = productId;
    productCount ++;
}

void addOrder(char address[], int orderId)
{
    strcpy(orders[orderCount].m_address, address);
    orders[orderCount].m_orderId = orderId;
    orderCount ++;
}

void executeOrders()
{
    for (int i = 0; i < orderCount; i ++)
    {
        for (int j = 0; j < productCount; j ++)
        {
            if (orders[i].m_orderId == products[j].m_productId)
            {
                printf("Client %s ordered %s\n", orders[i].m_address, products[j].m_name);

                for (int k = i; k < orderCount - 1; k ++)
                {
                    orders[k] = orders[k + 1];
                }
                orderCount --;
                break;
            }
        }
    }
}

void zad2()
{
    char command[10];
    char name[10];
    float price;
    int productId;
    char address[10];

    while (1)
    {
        scanf("%s", command);

        if (strcmp(command, "Product") == 0)
        {
            scanf("%s %f %d", name, &price, &productId);
            addProduct(name, price, productId);
        }
        else if (strcmp(command, "Order") == 0)
        {
            scanf("%s %d", address, &productId);
            addOrder(address, productId);
        }
        else if (strcmp(command, "END") == 0)
        {
            break;
        }
    }

    executeOrders();
}
