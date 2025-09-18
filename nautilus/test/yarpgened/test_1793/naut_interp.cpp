/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1793
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1793
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<short> var_3, val<bool> var_6, val<bool> var_7, val<unsigned int> var_9, val<int> zero, val<unsigned long long int*> var_10, val<int*> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) (val<unsigned char>)61)) + (((/* implicit */val<int>) var_7)))), ((-(((/* implicit */val<int>) (val<short>)13460))))))) - (min((max((var_1), (var_2))), (((/* implicit */val<unsigned int>) var_3))))));
    if (((/* implicit */val<bool>) ((val<unsigned int>) (!(((/* implicit */val<bool>) (val<unsigned char>)157))))))
    {
        *var_11 = ((/* implicit */val<int>) var_6);
        *var_12 -= ((/* implicit */val<unsigned short>) var_6);
    }

    *var_13 = ((/* implicit */val<unsigned short>) (+(var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2511439026U;
unsigned int var_2 = 1793499896U;
short var_3 = (short)3418;
bool var_6 = (bool)0;
bool var_7 = (bool)1;
unsigned int var_9 = 235811245U;
int zero = 0;
unsigned long long int var_10 = 16522741704313505061ULL;
int var_11 = -1537362096;
unsigned short var_12 = (unsigned short)42928;
unsigned short var_13 = (unsigned short)1775;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 4294950418ULL;
    value_mismatch |= var_11 != -1537362096;
    value_mismatch |= var_12 != (unsigned short)42928;
    value_mismatch |= var_13 != (unsigned short)12717;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
