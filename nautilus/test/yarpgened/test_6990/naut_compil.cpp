/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6990
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6990
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
void test(val<unsigned int> var_1, val<short> var_2, val<unsigned char> var_4, val<unsigned long long int> var_5, val<short> var_6, val<unsigned char> var_7, val<signed char> var_8, val<short> var_9, val<long long int> var_10, val<unsigned char> var_11, val<int> zero, val<bool*> var_12, val<int*> var_13, val<long long int*> var_14, val<unsigned int*> var_15, val<signed char*> var_16, val<signed char*> var_17) {
    if (((/* implicit */val<bool>) (-(min((((/* implicit */val<unsigned int>) var_7)), (var_1))))))
    {
        *var_12 = ((/* implicit */val<bool>) min((*var_12), (((/* implicit */val<bool>) max((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) + (((var_1) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))))))), (((/* implicit */val<unsigned int>) ((val<bool>) var_2))))))));
        if (((/* implicit */val<bool>) (-((-(var_10))))))
        {
            *var_13 = ((/* implicit */val<int>) var_10);
            *var_14 = ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) ((val<unsigned char>) var_9))) % (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_2)))))) > (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) % (var_10)))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) < (((/* implicit */val<int>) var_11))))) : ((~(((/* implicit */val<int>) var_8))))))));
            *var_15 = ((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) max(((val<unsigned short>)32798), ((val<unsigned short>)16368)))))))));
            *var_16 += ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((min((var_1), (((/* implicit */val<unsigned int>) var_7)))) + (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_8)))))))) / (max((((/* implicit */val<unsigned long long int>) ((val<unsigned short>) var_9))), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (var_5)))))));
        }

    }

    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)49198)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)49167)) <= (((/* implicit */val<int>) (val<unsigned char>)128)))))) : (71520382899705102LL)))) ? (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_8))))) : (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2422825963U;
short var_2 = (short)12362;
unsigned char var_4 = (unsigned char)50;
unsigned long long int var_5 = 16385215498635590505ULL;
short var_6 = (short)23114;
unsigned char var_7 = (unsigned char)149;
signed char var_8 = (signed char)10;
short var_9 = (short)-1840;
long long int var_10 = -5181138295094433742LL;
unsigned char var_11 = (unsigned char)75;
int zero = 0;
bool var_12 = (bool)0;
int var_13 = -1855332184;
long long int var_14 = 5688763046657249709LL;
unsigned int var_15 = 3189028634U;
signed char var_16 = (signed char)-125;
signed char var_17 = (signed char)40;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != -457627598;
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (signed char)-125;
    value_mismatch |= var_17 != (signed char)50;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
