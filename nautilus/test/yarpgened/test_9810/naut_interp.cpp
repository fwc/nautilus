/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9810
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9810
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
void test(val<int> var_0, val<signed char> var_2, val<long long int> var_6, val<long long int> var_13, val<int> zero, val<unsigned char*> var_19, val<unsigned short*> var_20, val<bool*> var_21) {
    *var_19 = (val<unsigned char>)127;
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_6)) ? (489158528880124263LL) : (min((var_13), (((/* implicit */val<long long int>) (val<unsigned char>)140))))));
    *var_21 = ((/* implicit */val<bool>) (~(min((var_0), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) -8248311011211949765LL)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1186749283;
signed char var_2 = (signed char)123;
long long int var_6 = -5267559146795460447LL;
long long int var_13 = -5303510904383191415LL;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
unsigned short var_20 = (unsigned short)18944;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)127;
    value_mismatch |= var_20 != (unsigned short)41319;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_13, zero, &var_19, &var_20, &var_21);
  checksum();
}
