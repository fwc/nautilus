/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2072
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2072
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
void test(val<bool> var_0, val<long long int> var_3, val<short> var_4, val<int> zero, val<long long int*> var_11, val<bool*> var_12) {
    *var_11 *= ((/* implicit */val<long long int>) var_0);
    *var_12 = ((/* implicit */val<bool>) max(((-(max((11790259515191954459ULL), (((/* implicit */val<unsigned long long int>) var_4)))))), (((/* implicit */val<unsigned long long int>) ((val<long long int>) ((15808747186732615834ULL) + (((/* implicit */val<unsigned long long int>) var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
long long int var_3 = -3008494355766146776LL;
short var_4 = (short)10785;
int zero = 0;
long long int var_11 = 6078610524053833573LL;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 6078610524053833573LL;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
