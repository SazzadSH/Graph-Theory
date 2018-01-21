#include <iostream>

using namespace std;

int main()
{
    cout << "1) Input nodes and edges." << endl;
    cout << "2) Retrieve from text file." << endl;
    cout << "Enter the number of the choice (any key except 1/2 for exit): "

    int selection;

    cin >> selection;

    if(selection == 1)
    {
        int numNodes;

        cout << "Number of nodes: " << endl;
        cin>> numNodes;

        int matrix[numNodes][numNodes];

        for(int i = 0; i < numNodes; i++)
        {
            for(int j = 0; j < numNodes; j++)
            {
                cout << "Edge weight from node " << i + 1 << " to node " << j + 1 << "(-1 for no edge): " << endl;
                cin >> matrix[i][j];
            }
        }

        cout << endl;

        cout << "Nodes " << "\t";

        for(int i = 1; i <= numNodes; i++)
        {
            cout << i << "\t";
        }

        cout << endl;

        for(int i = 0; i < numNodes; i++)
        {
            cout << i+1 << "\t";

            for(int j = 0; j < numNodes; j++)
            {
                cout << matrix[i][j] << "\t";
            }

            cout << endl;
        }
    }
    else if(selection == 2)
    {
        int numNodes;

        cout << "Number of nodes: " << endl;
        cin>> numNodes;

        int matrix[numNodes][numNodes];

    }

    return 0;
}
