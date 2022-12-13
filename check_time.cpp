#include "check_time.h"

void check_time(int start_index, int end_index) {
    for (int n = start_index; n <= end_index; n++) {
        Graph g = random_graph(n, 2, 5);

        auto time1 = std::chrono::high_resolution_clock::now();
        tsp_greed(g, 1);
        auto time2 = std::chrono::high_resolution_clock::now();
        double duration = std::chrono::duration<double>(time2 - time1).count();
        std::cout << "N = " << n << " TSP_GREED | Time: " << duration << std::endl;

        time1 = std::chrono::high_resolution_clock::now();
        tsp_bnb(g, 1);
        time2 = std::chrono::high_resolution_clock::now();
        duration = std::chrono::duration<double>(time2 - time1).count();
        std::cout << "N = " << n <<  " TSP_BNB | Time: " << duration << std::endl;

        time1 = std::chrono::high_resolution_clock::now();
        tsp_native(g, 1);
        time2 = std::chrono::high_resolution_clock::now();
        duration = std::chrono::duration<double>(time2 - time1).count();
        std::cout << "N = " << n << " NATIVE | Time: " << duration << "\n\n";
    }
}