/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=561
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<short> var_2, val<unsigned short> var_5, val<signed char> var_7, val<signed char> var_8, val<signed char> var_9, val<unsigned char> var_10, val<short> var_12, val<int> var_13, val<signed char> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned short*> var_16, val<signed char*> var_17, val<bool*> var_18, val<bool*> var_19) {
    *var_15 = ((/* implicit */val<unsigned short>) var_8);
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) max((((((((/* implicit */val<int>) var_12)) - (((/* implicit */val<int>) var_14)))) != ((-(((/* implicit */val<int>) var_7)))))), ((!(((/* implicit */val<bool>) ((((/* implicit */val<int>) var_14)) << (((10092677226132082678ULL) - (10092677226132082652ULL)))))))))))));
    *var_17 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) max((var_9), ((val<signed char>)63)))) ? (((((/* implicit */val<bool>) var_10)) ? (8354066847577468926ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))) >= (min((((/* implicit */val<unsigned long long int>) ((val<short>) (val<signed char>)63))), (var_0)))));
    *var_18 = ((/* implicit */val<bool>) var_13);
    *var_19 = ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2861590754073583583ULL;
unsigned char var_1 = (unsigned char)52;
short var_2 = (short)14408;
unsigned short var_5 = (unsigned short)58378;
signed char var_7 = (signed char)52;
signed char var_8 = (signed char)-28;
signed char var_9 = (signed char)-122;
unsigned char var_10 = (unsigned char)167;
short var_12 = (short)-9934;
int var_13 = 663475248;
signed char var_14 = (signed char)54;
int zero = 0;
unsigned short var_15 = (unsigned short)63955;
unsigned short var_16 = (unsigned short)10360;
signed char var_17 = (signed char)0;
bool var_18 = (bool)1;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)65508;
    value_mismatch |= var_16 != (unsigned short)10360;
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, var_7, var_8, var_9, var_10, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
