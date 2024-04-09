#ifndef A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_TSPALGORITHMS_ALGORITHM1_ALGORITHM1_H_
#define A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_TSPALGORITHMS_ALGORITHM1_ALGORITHM1_H_

#include "Graph/Graph.h"
#include "common/structs.h"

namespace s21 {
class Algorithm1 {
 public:
    [[nodiscard]] TspResult SolveTravelingSalesmanProblem(const Graph &graph);

 private:
};

}// namespace s21

#endif//A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_TSPALGORITHMS_ALGORITHM1_ALGORITHM1_H_
