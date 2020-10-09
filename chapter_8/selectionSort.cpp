// Selection sort implementation
void selectionSort(int list[], int size)
{
    int startScan;
    int minIndex;
    int minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = list[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (list[index] < minValue)
            {
                minValue = list[index];
                minIndex = index;
            }
                }
        list[minIndex] = list[startScan];
        list[startScan] = minValue;
    }
}