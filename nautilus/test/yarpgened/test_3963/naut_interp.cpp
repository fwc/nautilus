/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3963
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3963
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
void test(val<unsigned long long int> var_0, val<short> var_1, val<short> var_2, val<unsigned long long int> var_3, val<unsigned short> var_4, val<unsigned short> var_7, val<int> zero, val<unsigned long long int*> var_13, val<bool*> var_14, val<unsigned short*> var_15, val<unsigned long long int*> var_16) {
    if (((/* implicit */val<bool>) var_0))
    {
        *var_13 &= var_3;
        *var_14 = ((/* implicit */val<bool>) min((*var_14), (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_1)) / (((/* implicit */val<int>) var_7)))))));
    }

    *var_15 = var_4;
    *var_16 = ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) & (6024743444677874452ULL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11746522131475755864ULL;
short var_1 = (short)3095;
short var_2 = (short)-25283;
unsigned long long int var_3 = 2380999862483707265ULL;
unsigned short var_4 = (unsigned short)24299;
unsigned short var_7 = (unsigned short)7080;
int zero = 0;
unsigned long long int var_13 = 2369675981564967923ULL;
bool var_14 = (bool)1;
unsigned short var_15 = (unsigned short)47324;
unsigned long long int var_16 = 14882021963044891082ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 2306408982850331009ULL;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (unsigned short)24299;
    value_mismatch |= var_16 != 6024743444677857556ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_7, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
