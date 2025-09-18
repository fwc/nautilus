/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5345
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5345
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
void test(val<unsigned long long int> var_2, val<bool> var_5, val<long long int> var_7, val<bool> var_10, val<bool> var_14, val<int> zero, val<long long int*> var_17, val<unsigned short*> var_18, val<unsigned int*> var_19) {
    *var_17 = var_7;
    *var_18 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_14))) <= (max((var_2), (((/* implicit */val<unsigned long long int>) var_5))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_10)) & (((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) (val<short>)12427))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15090875780822043573ULL;
bool var_5 = (bool)1;
long long int var_7 = -6025137894059333059LL;
bool var_10 = (bool)0;
bool var_14 = (bool)0;
int zero = 0;
long long int var_17 = 6694837049812054863LL;
unsigned short var_18 = (unsigned short)897;
unsigned int var_19 = 3626161025U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -6025137894059333059LL;
    value_mismatch |= var_18 != (unsigned short)897;
    value_mismatch |= var_19 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_10, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
}
