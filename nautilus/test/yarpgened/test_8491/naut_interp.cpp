/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8491
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8491
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
void test(val<long long int> var_0, val<signed char> var_1, val<short> var_2, val<int> var_3, val<short> var_6, val<unsigned char> var_7, val<unsigned char> var_10, val<int> var_11, val<int> zero, val<long long int*> var_12, val<short*> var_13, val<bool*> var_14, val<bool*> var_15) {
    *var_12 = ((/* implicit */val<long long int>) min((max((var_3), (((((/* implicit */val<bool>) var_7)) ? (734582360) : (((/* implicit */val<int>) var_7)))))), ((~(((val<int>) var_11))))));
    *var_13 = ((/* implicit */val<short>) max((*var_13), (((/* implicit */val<short>) (~(((((/* implicit */val<bool>) var_0)) ? (((-559675485) ^ (var_11))) : (((/* implicit */val<int>) ((val<bool>) -559675485))))))))));
    *var_14 = ((/* implicit */val<bool>) max((max((4569356668895997286LL), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) - (((/* implicit */val<int>) var_10))))))), (((/* implicit */val<long long int>) (val<unsigned short>)0))));
    *var_15 = ((/* implicit */val<bool>) (-((+(((((/* implicit */val<int>) var_1)) + (((/* implicit */val<int>) var_2))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3436249055324256255LL;
signed char var_1 = (signed char)46;
short var_2 = (short)1187;
int var_3 = -704753406;
short var_6 = (short)-21559;
unsigned char var_7 = (unsigned char)241;
unsigned char var_10 = (unsigned char)91;
int var_11 = -1506323568;
int zero = 0;
long long int var_12 = -6763526586923036463LL;
short var_13 = (short)10390;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 734582360LL;
    value_mismatch |= var_13 != (short)10390;
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
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
