/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2470
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2470
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
void test(val<int> var_0, val<unsigned char> var_1, val<unsigned char> var_4, val<short> var_5, val<int> var_6, val<unsigned char> var_7, val<unsigned long long int> var_8, val<long long int> var_10, val<int> zero, val<unsigned short*> var_12, val<int*> var_13, val<bool*> var_14, val<bool*> var_15) {
    *var_12 = ((val<unsigned short>) min((((/* implicit */val<int>) var_1)), (var_6)));
    *var_13 = ((/* implicit */val<int>) max((min((var_8), (((/* implicit */val<unsigned long long int>) var_7)))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_5)) && (((/* implicit */val<bool>) var_0))))), (var_4))))));
    *var_14 = ((/* implicit */val<bool>) ((val<short>) ((val<unsigned char>) var_10)));
    *var_15 = ((val<bool>) max((((/* implicit */val<long long int>) min((var_6), (var_6)))), (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1793603738;
unsigned char var_1 = (unsigned char)23;
unsigned char var_4 = (unsigned char)108;
short var_5 = (short)-31522;
int var_6 = 1547312097;
unsigned char var_7 = (unsigned char)255;
unsigned long long int var_8 = 15570849444687138068ULL;
long long int var_10 = -1136938698014088767LL;
int zero = 0;
unsigned short var_12 = (unsigned short)20580;
int var_13 = -1614956354;
bool var_14 = (bool)1;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)23;
    value_mismatch |= var_13 != 255;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_6, var_7, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
