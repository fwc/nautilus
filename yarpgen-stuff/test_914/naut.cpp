/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 914
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=914
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
void test(val<int> var_0, val<unsigned char> var_1, val<long long int> var_2, val<int> var_3, val<unsigned short> var_5, val<int> var_6, val<signed char> var_7, val<short> var_8, val<long long int> var_9, val<unsigned short> var_10, val<short> var_11, val<int> zero, val<unsigned short*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15, val<int*> var_16, val<long long int*> var_17, val<bool*> var_18, val<unsigned long long int*> var_19) {
    *var_13 = ((/* implicit */val<unsigned short>) ((val<signed char>) ((((/* implicit */val<bool>) var_7)) ? ((+(var_3))) : (((/* implicit */val<int>) var_7)))));
    if (((/* implicit */val<bool>) max((var_0), (var_0))))
    {
        *var_14 -= ((val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) ? ((+(((/* implicit */val<int>) var_10)))) : (((((/* implicit */val<bool>) var_6)) ? (var_0) : (((/* implicit */val<int>) var_7))))));
        *var_15 = ((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_5)), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_1))))) ? (((val<long long int>) 6013439162585626350LL)) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) min((var_10), (((/* implicit */val<unsigned short>) var_8))))))))));
        *var_16 = ((/* implicit */val<int>) var_5);
        *var_17 = max((((/* implicit */val<long long int>) ((((max((var_6), (((/* implicit */val<int>) (val<short>)-1)))) + (2147483647))) << (((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_5)))) - (6790)))))), (max((var_9), (((/* implicit */val<long long int>) ((val<short>) var_2))))));
        *var_18 = ((/* implicit */val<bool>) var_11);
    }

    *var_19 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_3), (((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<bool>) 1308357832)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_7)))) : (((/* implicit */val<int>) ((val<signed char>) var_6))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1940576870;
unsigned char var_1 = (unsigned char)72;
long long int var_2 = -1565431168452654247LL;
int var_3 = 1645022696;
unsigned short var_5 = (unsigned short)6790;
int var_6 = -760590707;
signed char var_7 = (signed char)96;
short var_8 = (short)17718;
long long int var_9 = 1306433109895739386LL;
unsigned short var_10 = (unsigned short)45377;
short var_11 = (short)7123;
int zero = 0;
unsigned short var_13 = (unsigned short)41615;
unsigned long long int var_14 = 17345598326533295698ULL;
bool var_15 = (bool)0;
int var_16 = 458929078;
long long int var_17 = -1341148294519589879LL;
bool var_18 = (bool)0;
unsigned long long int var_19 = 5772041755393333297ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)65512;
    value_mismatch |= var_14 != 17345598326533250321ULL;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 6790;
    value_mismatch |= var_17 != 1306433109895739386LL;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
