// Simple linear search on an array
int searchList(const int list[], int numElements, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < numElements && !found)
    {
        if (list[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}