// Simple binary search on an array
int binarySearch(const int list[], int numElements, int value)
{
    int first = 0;              // First array element
    int last = numElements - 1; // Last array element
    int middle;                 // Midpoint of the array
    int position = -1;          // Index of search value
    bool found = false;         // Flag

    while (!found & first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (list[middle] == value)   // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (list[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return position;
}