// Definition of findHigh function goes here

template < typename A, typename B, typename C, typename D>
void findHigh(A fpData[], B size, C &index, D &fpHigh) {
    for (int i = 0; i < size; i++) {
        if (fpData[i] > fpHigh) {
            index = i;
            fpHigh = fpData[i];
        }
    }
}
