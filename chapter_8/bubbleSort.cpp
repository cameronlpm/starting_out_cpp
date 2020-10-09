// Bubble sort implementation
void sortArray(int list[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int index = 0; index < size - 1; index++)
        {
            if (list[index] > list[index + 1])
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}