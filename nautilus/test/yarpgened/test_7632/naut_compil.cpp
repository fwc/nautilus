/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7632
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
void test(val<int> var_1, val<unsigned char> var_2, val<short> var_4, val<unsigned long long int> var_5, val<unsigned int> var_6, val<long long int> var_8, val<bool> var_11, val<unsigned int> var_12, val<bool> var_14, val<int> zero, val<unsigned int*> var_15, val<short*> var_16, val<bool*> var_17, val<unsigned short*> var_18, val<bool*> var_19, val<signed char*> var_20) {
    *var_15 = ((/* implicit */val<unsigned int>) var_8);
    *var_16 = ((/* implicit */val<short>) var_1);
    *var_17 = ((/* implicit */val<bool>) min((*var_17), (((((/* implicit */val<unsigned int>) min((var_1), (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<short>)-16422)) > (((/* implicit */val<int>) var_4)))))))) <= (var_6)))));
    if (((/* implicit */val<bool>) (-(((((/* implicit */val<bool>) (-(var_5)))) ? (((/* implicit */val<long long int>) var_12)) : (((val<long long int>) var_8)))))))
    {
        *var_18 = ((/* implicit */val<unsigned short>) (~((~(((/* implicit */val<int>) var_11))))));
        *var_19 = ((/* implicit */val<bool>) var_2);
        *var_20 = ((/* implicit */val<signed char>) min((((((((/* implicit */val<int>) var_14)) * (((/* implicit */val<int>) var_4)))) / (min((-1614661587), (((/* implicit */val<int>) (val<short>)9169)))))), (max((min((var_1), (var_1))), (((/* implicit */val<int>) var_2))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1355676233;
unsigned char var_2 = (unsigned char)168;
short var_4 = (short)1829;
unsigned long long int var_5 = 6124801031286878971ULL;
unsigned int var_6 = 3814472975U;
long long int var_8 = -6296391616998012416LL;
bool var_11 = (bool)0;
unsigned int var_12 = 2780344163U;
bool var_14 = (bool)1;
int zero = 0;
unsigned int var_15 = 1638111275U;
short var_16 = (short)332;
bool var_17 = (bool)1;
unsigned short var_18 = (unsigned short)6287;
bool var_19 = (bool)1;
signed char var_20 = (signed char)-47;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 504760832U;
    value_mismatch |= var_16 != (short)1463;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_8, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
