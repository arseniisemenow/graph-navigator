#ifndef A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_TSPALGORITHMS_COLONYALGORITHM_COLONYALGORITHM_H_
#define A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_TSPALGORITHMS_COLONYALGORITHM_COLONYALGORITHM_H_

#include "Graph/Graph.h"
#include "common/structs.h"

namespace s21 {
class ColonyAlgorithm {
 public:
  [[nodiscard]] TspResult SolveTravelingSalesmanProblem(const Graph &graph);
};

}  // namespace s21

#endif  // A2_SIMPLENAVIGATOR_V1_0_CPP_1_SRC_GRAPHALGORITHMS_TSPALGORITHMS_COLONYALGORITHM_COLONYALGORITHM_H_
