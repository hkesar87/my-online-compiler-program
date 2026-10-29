#include <stdio.h>

int main() {
    int n, i, j, temp;

    // यूज़र से पूछें कि कितने नंबर्स इनपुट करने हैं
    printf("आप कितने नंबर्स इनपुट करना चाहते हैं? : ");
    scanf("%d", &n);

    int arr[n]; // यूज़र की ज़रूरत के हिसाब से साइज का ऐरे बनाया

    // ऐरे में नंबर्स इनपुट लेना
    printf("%d नंबर्स दर्ज करें:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // बढ़ते क्रम (Ascending) के लिए सॉर्टिंग लॉजिक
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            // अगर पहले वाला नंबर बाद वाले से बड़ा है, तो अदला-बदली (Swap) करें
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // सॉर्ट किए गए नंबर्स को प्रिंट करना
    printf("\nAscending Order (बढ़ते क्रम) में नंबर्स:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
