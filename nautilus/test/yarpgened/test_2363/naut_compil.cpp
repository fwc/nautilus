/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2363
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2363
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
void test(val<bool> var_0, val<int> var_1, val<int> var_6, val<short> var_7, val<int> var_9, val<int> zero, val<bool*> var_10, val<unsigned long long int*> var_11, val<bool*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_10 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 289840275U)) ? ((-(((/* implicit */val<int>) var_0)))) : ((-(((/* implicit */val<int>) (val<bool>)1))))))) : (((((/* implicit */val<bool>) 1909304136U)) ? (((((/* implicit */val<bool>) 763160525)) ? (1909304118U) : (4005127040U))) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1909304150U)) ? (((/* implicit */val<int>) (val<short>)-32758)) : (763160522))))))));
    if (((/* implicit */val<bool>) ((val<unsigned char>) ((((/* implicit */val<bool>) ((val<unsigned int>) 2385663178U))) ? (((/* implicit */val<int>) (val<unsigned short>)1)) : (min((-599756101), (-781168224)))))))
    {
        *var_11 = ((/* implicit */val<unsigned long long int>) (+(var_9)));
        if (((/* implicit */val<bool>) (~(min((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)250)) > (((/* implicit */val<int>) (val<unsigned char>)255))))), (((((/* implicit */val<bool>) (val<short>)-23186)) ? (var_6) : (((/* implicit */val<int>) (val<signed char>)-121)))))))))
        {
            *var_12 = ((/* implicit */val<bool>) min(((((!(((/* implicit */val<bool>) 2385663168U)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min(((val<unsigned short>)14), (((/* implicit */val<unsigned short>) (val<signed char>)31)))))) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))) : (1909304141U))))), (((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)1)) / (var_1)))) / ((((val<bool>)1) ? (2385663178U) : (((/* implicit */val<unsigned int>) var_1))))))));
            *var_13 = var_0;
            *var_14 = ((/* implicit */val<unsigned char>) max((*var_14), (((/* implicit */val<unsigned char>) 1909304145U))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
int var_1 = 1186314242;
int var_6 = 590839712;
short var_7 = (short)27580;
int var_9 = -1395693237;
int zero = 0;
bool var_10 = (bool)0;
unsigned long long int var_11 = 880331712721545628ULL;
bool var_12 = (bool)0;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)56;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != 18446744072313858379ULL;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)81;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
