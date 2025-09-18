/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9108
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9108
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<long long int> var_4, val<unsigned char> var_10, val<int> zero, val<short*> var_20, val<bool*> var_21, val<unsigned char*> var_22, val<unsigned long long int*> var_23) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<int>) 8589869056ULL))) && (((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_4)))) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) (val<unsigned short>)65535)))))));
    *var_21 = (!(((/* implicit */val<bool>) (~((~(1922426727U)))))));
    *var_22 = ((/* implicit */val<unsigned char>) max((*var_22), (var_10)));
    *var_23 &= ((/* implicit */val<unsigned long long int>) min((var_0), (((/* implicit */val<unsigned short>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31405;
unsigned short var_1 = (unsigned short)41954;
long long int var_4 = -4836685362861069611LL;
unsigned char var_10 = (unsigned char)207;
int zero = 0;
short var_20 = (short)-31972;
bool var_21 = (bool)1;
unsigned char var_22 = (unsigned char)6;
unsigned long long int var_23 = 15452089322739018904ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (unsigned char)207;
    value_mismatch |= var_23 != 136ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_10, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
