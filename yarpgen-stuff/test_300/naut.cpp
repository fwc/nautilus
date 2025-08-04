/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 300
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=300
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<long long int> var_2, val<unsigned short> var_3, val<unsigned short> var_4, val<unsigned short> var_5, val<signed char> var_7, val<bool> var_8, val<unsigned short> var_9, val<int> zero, val<short*> var_10, val<long long int*> var_11, val<unsigned short*> var_12, val<int*> var_13, val<unsigned char*> var_14, val<unsigned long long int*> var_15, val<long long int*> var_16) {
    *var_10 ^= ((/* implicit */val<short>) var_4);
    *var_11 = var_2;
    if (((/* implicit */val<bool>) (~(max((((/* implicit */val<int>) var_3)), (((((/* implicit */val<int>) var_9)) & (((/* implicit */val<int>) (val<signed char>)70)))))))))
    {
        *var_12 = ((/* implicit */val<unsigned short>) max((*var_12), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_9)) > (((/* implicit */val<int>) var_7)))))));
        *var_13 = 124747886;
        if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) var_8)), (var_1))))
        {
            *var_14 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) max((var_3), (var_0)))) ? ((+(((/* implicit */val<int>) var_5)))) : (((((/* implicit */val<int>) var_7)) * (((/* implicit */val<int>) var_7))))))));
            *var_15 = ((/* implicit */val<unsigned long long int>) min((max((((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<unsigned short>)5972)) != (((/* implicit */val<int>) (val<unsigned short>)5972))))), ((val<unsigned short>)12069))), ((val<unsigned short>)59563)));
        }

    }

    *var_16 |= ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_4)) + (((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2277;
unsigned short var_1 = (unsigned short)28051;
long long int var_2 = -855345939725389000LL;
unsigned short var_3 = (unsigned short)41814;
unsigned short var_4 = (unsigned short)24449;
unsigned short var_5 = (unsigned short)25559;
signed char var_7 = (signed char)-34;
bool var_8 = (bool)1;
unsigned short var_9 = (unsigned short)25950;
int zero = 0;
short var_10 = (short)31716;
long long int var_11 = -6980821642533640215LL;
unsigned short var_12 = (unsigned short)17045;
int var_13 = 476957244;
unsigned char var_14 = (unsigned char)230;
unsigned long long int var_15 = 8044613905643504241ULL;
long long int var_16 = 402166511315730540LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)9317;
    value_mismatch |= var_11 != -855345939725389000LL;
    value_mismatch |= var_12 != (unsigned short)17045;
    value_mismatch |= var_13 != 124747886;
    value_mismatch |= var_14 != (unsigned char)41;
    value_mismatch |= var_15 != 12069ULL;
    value_mismatch |= var_16 != 402166511315779438LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
