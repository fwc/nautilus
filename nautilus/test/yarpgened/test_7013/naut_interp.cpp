/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7013
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7013
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
void test(val<long long int> var_2, val<unsigned short> var_4, val<long long int> var_5, val<unsigned char> var_6, val<long long int> var_7, val<unsigned char> var_9, val<bool> var_10, val<bool> var_11, val<unsigned int> var_12, val<bool> var_14, val<int> zero, val<signed char*> var_15, val<unsigned long long int*> var_16, val<bool*> var_17, val<bool*> var_18, val<short*> var_19, val<unsigned short*> var_20, val<bool*> var_21, val<bool*> var_22) {
    *var_15 = ((/* implicit */val<signed char>) min(((~(5937933004149761847ULL))), (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) var_14)))))));
    *var_16 -= ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((val<unsigned short>) ((val<bool>) (val<unsigned short>)49115))))));
    *var_17 = ((/* implicit */val<bool>) (~(var_5)));
    *var_18 ^= ((/* implicit */val<bool>) -1577779135);
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_4)), (max((((val<unsigned long long int>) 1577779134)), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) < (var_2)))))))))
    {
        *var_19 = ((/* implicit */val<short>) max((max((min((var_7), (((/* implicit */val<long long int>) var_9)))), (max((var_5), (((/* implicit */val<long long int>) 4107949414U)))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)1023))))))))));
        *var_20 = ((/* implicit */val<unsigned short>) min((*var_20), (((/* implicit */val<unsigned short>) var_12))));
    }
    else
    {
        *var_21 = ((/* implicit */val<bool>) ((((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<bool>)1))))) & (((((/* implicit */val<unsigned long long int>) 1577779135)) / (137438953471ULL))))) + (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (!(var_10)))), (max((var_12), (((/* implicit */val<unsigned int>) var_11)))))))));
        *var_22 -= ((((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_9), (var_9))))) != (var_5));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 626380727803186436LL;
unsigned short var_4 = (unsigned short)2403;
long long int var_5 = -1074556773443546028LL;
unsigned char var_6 = (unsigned char)214;
long long int var_7 = -3082474918297544438LL;
unsigned char var_9 = (unsigned char)27;
bool var_10 = (bool)0;
bool var_11 = (bool)1;
unsigned int var_12 = 3438721977U;
bool var_14 = (bool)0;
int zero = 0;
signed char var_15 = (signed char)-19;
unsigned long long int var_16 = 8222851148049799070ULL;
bool var_17 = (bool)1;
bool var_18 = (bool)1;
short var_19 = (short)-15162;
unsigned short var_20 = (unsigned short)65127;
bool var_21 = (bool)0;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)0;
    value_mismatch |= var_16 != 8222851148049799072ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (short)21862;
    value_mismatch |= var_20 != (unsigned short)48057;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
