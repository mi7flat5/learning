template<class ItemType>
void BubbleUp(ItemType values[], int startIndex, int endIndex)

{
  for (int index = endIndex; index > startIndex; index--)
    if (values[index] < values[index-1])
      Swap(values[index], values[index-1]);
}

template<class ItemType>
void BubbleSort(ItemType values[], int numValues)

{
  int current = 0;

  while (current < 4)
  {
    BubbleUp(values, current, numValues-1);
    current++;
  }
}
template<class ItemType>
void Swap(ItemType& one, ItemType& two)
{
    ItemType temp;
    temp = one;
    one = two;
   two = temp;
}

