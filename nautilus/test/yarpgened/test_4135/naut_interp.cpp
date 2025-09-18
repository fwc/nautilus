/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4135
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4135
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
void test(val<unsigned short> var_0, val<unsigned int> var_1, val<bool> var_2, val<bool> var_3, val<long long int> var_4, val<int> var_5, val<unsigned short> var_6, val<signed char> var_7, val<int> var_8, val<unsigned short> var_9, val<signed char> var_10, val<unsigned short> var_11, val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_14, val<int*> var_15, val<long long int*> var_16, val<long long int*> var_17, val<unsigned int*> var_18, val<signed char*> var_19) {
    *var_14 |= ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_0)))))));
    *var_15 = ((/* implicit */val<int>) ((max((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (6751138306894008971ULL))), (((/* implicit */val<unsigned long long int>) var_2)))) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_8))))))));
    if (((/* implicit */val<bool>) ((val<unsigned short>) (-((-(18U)))))))
    {
        *var_16 = ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) / (((((((/* implicit */val<bool>) var_4)) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10))))) ^ (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_2)) | (var_5)))))));
        *var_17 = ((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) + (1953692347U)))) ? (var_1) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) var_11)))))), (((/* implicit */val<unsigned int>) var_3))));
    }

    *var_18 = ((/* implicit */val<unsigned int>) max((*var_18), (((/* implicit */val<unsigned int>) max(((+(((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_9)))))));
    *var_19 = ((/* implicit */val<signed char>) max((*var_19), (((/* implicit */val<signed char>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35842;
unsigned int var_1 = 3733577912U;
bool var_2 = (bool)1;
bool var_3 = (bool)0;
long long int var_4 = 4450841087466319640LL;
int var_5 = 825878892;
unsigned short var_6 = (unsigned short)7335;
signed char var_7 = (signed char)43;
int var_8 = -82951499;
unsigned short var_9 = (unsigned short)38396;
signed char var_10 = (signed char)36;
unsigned short var_11 = (unsigned short)51059;
long long int var_12 = 7417584203870838815LL;
int zero = 0;
unsigned long long int var_14 = 14402059781957603273ULL;
int var_15 = 495693087;
long long int var_16 = 9126554431855410863LL;
long long int var_17 = -8324983431295090600LL;
unsigned int var_18 = 1671294007U;
signed char var_19 = (signed char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 14402059781957603273ULL;
    value_mismatch |= var_15 != 1;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != 0LL;
    value_mismatch |= var_18 != 1671294007U;
    value_mismatch |= var_19 != (signed char)64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
