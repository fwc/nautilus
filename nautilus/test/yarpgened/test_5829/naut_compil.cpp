/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5829
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5829
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
void test(val<long long int> var_0, val<unsigned long long int> var_1, val<unsigned int> var_5, val<int> var_6, val<long long int> var_8, val<int> zero, val<bool*> var_12, val<short*> var_13, val<signed char*> var_14, val<unsigned short*> var_15) {
    *var_12 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (val<unsigned short>)8192)), (var_5)));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) (-(((/* implicit */val<int>) (val<signed char>)-106)))))));
    *var_14 = ((/* implicit */val<signed char>) var_0);
    *var_15 = ((/* implicit */val<unsigned short>) max((min((((((/* implicit */val<bool>) var_6)) ? (var_1) : (((/* implicit */val<unsigned long long int>) (-9223372036854775807LL - 1LL))))), (((/* implicit */val<unsigned long long int>) max((var_5), (var_5)))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) (val<bool>)1)), (min((((/* implicit */val<long long int>) var_6)), (var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8025582579465467206LL;
unsigned long long int var_1 = 12636211058390668025ULL;
unsigned int var_5 = 4110989457U;
int var_6 = -1286722611;
long long int var_8 = -4410416883195580301LL;
int zero = 0;
bool var_12 = (bool)0;
short var_13 = (short)1952;
signed char var_14 = (signed char)89;
unsigned short var_15 = (unsigned short)7885;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)1952;
    value_mismatch |= var_14 != (signed char)70;
    value_mismatch |= var_15 != (unsigned short)47249;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_8, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
