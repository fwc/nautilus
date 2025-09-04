/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7898
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7898
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
void test(val<unsigned char> var_1, val<signed char> var_3, val<signed char> var_4, val<unsigned long long int> var_5, val<short> var_6, val<unsigned int> var_7, val<unsigned char> var_8, val<long long int> var_9, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_12, val<bool*> var_13, val<unsigned int*> var_14, val<int*> var_15, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18, val<long long int*> var_19) {
    *var_12 = ((/* implicit */val<unsigned long long int>) max((*var_12), (((val<unsigned long long int>) (+(var_10))))));
    if (((/* implicit */val<bool>) var_10))
    {
        *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)41)) ? ((((!(((/* implicit */val<bool>) var_6)))) ? ((-(var_5))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (val<unsigned short>)30890)) : (((/* implicit */val<int>) var_4))))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_8), (((/* implicit */val<unsigned char>) var_3))))))));
        *var_14 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) max(((val<short>)-18343), ((val<short>)-4005))))))) && (((/* implicit */val<bool>) var_7))));
        *var_15 += ((/* implicit */val<int>) (+(((((/* implicit */val<bool>) var_1)) ? (var_5) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4)))))));
        *var_16 -= ((/* implicit */val<unsigned char>) 8035281289925236210LL);
        *var_17 &= ((/* implicit */val<unsigned long long int>) var_4);
    }

    *var_18 += ((/* implicit */val<signed char>) ((val<short>) (!(((/* implicit */val<bool>) 1612778318)))));
    *var_19 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
signed char var_3 = (signed char)-41;
signed char var_4 = (signed char)-88;
unsigned long long int var_5 = 11979478361219700916ULL;
short var_6 = (short)-3557;
unsigned int var_7 = 4631033U;
unsigned char var_8 = (unsigned char)105;
long long int var_9 = -6967662991044232409LL;
unsigned long long int var_10 = 3048756624888762156ULL;
int zero = 0;
unsigned long long int var_12 = 7672944050297124297ULL;
bool var_13 = (bool)0;
unsigned int var_14 = 1020685770U;
int var_15 = 78945662;
unsigned char var_16 = (unsigned char)133;
unsigned long long int var_17 = 6031019591266371749ULL;
signed char var_18 = (signed char)97;
long long int var_19 = 5764847171664178893LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 7672944050297124297ULL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 1U;
    value_mismatch |= var_15 != 2142189106;
    value_mismatch |= var_16 != (unsigned char)147;
    value_mismatch |= var_17 != 6031019591266371744ULL;
    value_mismatch |= var_18 != (signed char)97;
    value_mismatch |= var_19 != -6967662991044232409LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
