/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8383
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8383
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_0, val<signed char> var_1, val<unsigned int> var_2, val<unsigned int> var_4, val<long long int> var_6, val<short> var_7, val<int> zero, val<unsigned int*> var_10, val<bool*> var_11) {
    *var_10 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned long long int>) var_6)) < (((((/* implicit */val<unsigned long long int>) var_2)) * (((17930095703037417790ULL) >> (((((/* implicit */val<int>) (val<short>)-13258)) + (13266)))))))));
    *var_11 = ((/* implicit */val<bool>) ((((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_2)) == (var_0))))) | (((var_6) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))) / (((/* implicit */val<long long int>) ((var_4) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 253864129985367875LL;
signed char var_1 = (signed char)90;
unsigned int var_2 = 1063293561U;
unsigned int var_4 = 2988030483U;
long long int var_6 = 4637680241962546872LL;
short var_7 = (short)-23779;
int zero = 0;
unsigned int var_10 = 508944463U;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 508944464U;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, zero, &var_10, &var_11);
  checksum();
}
