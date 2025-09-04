/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6983
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6983
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
void test(val<int> var_2, val<unsigned char> var_3, val<unsigned char> var_4, val<unsigned short> var_5, val<unsigned short> var_6, val<unsigned char> var_8, val<int> zero, val<unsigned char*> var_11, val<unsigned int*> var_12, val<unsigned char*> var_13, val<unsigned int*> var_14) {
    if (max(((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_5)) / (((/* implicit */val<int>) var_8))))))), (((((var_2) | (((/* implicit */val<int>) (val<unsigned short>)48904)))) <= ((-(var_2)))))))
    {
        *var_11 = ((/* implicit */val<unsigned char>) (+((+(((((/* implicit */val<bool>) var_5)) ? (-1274580462) : (((/* implicit */val<int>) var_8))))))));
        *var_12 = 4294967295U;
        *var_13 = var_3;
    }

    *var_14 = ((/* implicit */val<unsigned int>) max((var_2), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_4)) << (((((/* implicit */val<int>) var_6)) - (21565)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -796243899;
unsigned char var_3 = (unsigned char)124;
unsigned char var_4 = (unsigned char)142;
unsigned short var_5 = (unsigned short)56074;
unsigned short var_6 = (unsigned short)21574;
unsigned char var_8 = (unsigned char)4;
int zero = 0;
unsigned char var_11 = (unsigned char)166;
unsigned int var_12 = 1257423152U;
unsigned char var_13 = (unsigned char)151;
unsigned int var_14 = 28312032U;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)18;
    value_mismatch |= var_12 != 4294967295U;
    value_mismatch |= var_13 != (unsigned char)124;
    value_mismatch |= var_14 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_8, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
