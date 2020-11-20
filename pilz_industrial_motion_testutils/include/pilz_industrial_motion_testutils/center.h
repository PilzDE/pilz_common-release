/*
 * Copyright (c) 2019 Pilz GmbH & Co. KG
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CENTERAUXILIARY_H
#define CENTERAUXILIARY_H

#include "circauxiliary.h"

namespace pilz_industrial_motion_testutils
{
/**
 * @brief Class to define the center point of the circle
 * on which the robot is supposed to move via circ command.
 */
template <class ConfigType, class BuilderType>
class Center : public CircAuxiliary<ConfigType, BuilderType>
{
private:
  virtual std::string getConstraintName() const override;
};

template <class ConfigType, class BuilderType>
std::string Center<ConfigType, BuilderType>::getConstraintName() const
{
  return "center";
}

}  // namespace pilz_industrial_motion_testutils

#endif  // CENTERAUXILIARY_H
