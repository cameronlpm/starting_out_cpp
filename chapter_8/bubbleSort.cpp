// Bubble sort implementation
void sortArray(int list[], int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int count = 0; count < size - 1; count++)
        {
            if (list[count] > list[count + 1])
            {
                temp = list[count];
                list[count] = list[count + 1];
                list[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}