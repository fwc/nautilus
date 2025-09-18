/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5261
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
void test(val<unsigned short> var_0, val<bool> var_1, val<int> var_3, val<unsigned short> var_5, val<bool> var_7, val<short> var_8, val<short> var_9, val<bool> var_11, val<signed char> var_12, val<long long int> var_15, val<long long int> var_16, val<int> zero, val<unsigned short*> var_18, val<unsigned short*> var_19, val<short*> var_20, val<short*> var_21) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<int>) var_9)), ((-(((/* implicit */val<int>) var_0)))))))
    {
        *var_18 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((val<bool>) ((var_16) - (((/* implicit */val<long long int>) 2147483647)))))) + (((/* implicit */val<int>) var_8))));
        *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) min((var_5), (var_0)))) % (((/* implicit */val<int>) min((((/* implicit */val<short>) (val<bool>)1)), ((val<short>)-1047))))))) ? (((((/* implicit */val<long long int>) min((3260557049U), (((/* implicit */val<unsigned int>) var_3))))) + (((var_15) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)55615))))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))));
        *var_20 = ((/* implicit */val<short>) max((((((/* implicit */val<bool>) max(((val<unsigned short>)53200), (((/* implicit */val<unsigned short>) var_12))))) || (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_12)) >> (((9223372036854775807LL) - (9223372036854775788LL)))))))), (var_11)));
    }

    *var_21 = ((/* implicit */val<short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37397;
bool var_1 = (bool)1;
int var_3 = -1417671814;
unsigned short var_5 = (unsigned short)11206;
bool var_7 = (bool)0;
short var_8 = (short)-22019;
short var_9 = (short)18300;
bool var_11 = (bool)0;
signed char var_12 = (signed char)62;
long long int var_15 = 4491072819114362665LL;
long long int var_16 = -5328426848154707678LL;
int zero = 0;
unsigned short var_18 = (unsigned short)24076;
unsigned short var_19 = (unsigned short)38379;
short var_20 = (short)30074;
short var_21 = (short)12538;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)43518;
    value_mismatch |= var_19 != (unsigned short)31076;
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_8, var_9, var_11, var_12, var_15, var_16, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
