/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5267
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5267
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<long long int> var_1, val<int> var_5, val<unsigned long long int> var_14, val<bool> var_15, val<signed char> var_16, val<int> zero, val<int*> var_19, val<unsigned long long int*> var_20, val<short*> var_21, val<signed char*> var_22) {
    *var_19 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) (val<unsigned short>)29029)), (var_14)));
    *var_20 = 6962939917101169738ULL;
    *var_21 = ((/* implicit */val<short>) var_5);
    *var_22 = ((/* implicit */val<signed char>) ((var_1) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) min((((/* implicit */val<signed char>) var_15)), (var_16)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8373047961721518933LL;
int var_5 = -1080327687;
unsigned long long int var_14 = 8232889962936302704ULL;
bool var_15 = (bool)0;
signed char var_16 = (signed char)91;
int zero = 0;
int var_19 = -1599697483;
unsigned long long int var_20 = 17357500564793347206ULL;
short var_21 = (short)17124;
signed char var_22 = (signed char)-12;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 867335280;
    value_mismatch |= var_20 != 6962939917101169738ULL;
    value_mismatch |= var_21 != (short)-32263;
    value_mismatch |= var_22 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_14, var_15, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
