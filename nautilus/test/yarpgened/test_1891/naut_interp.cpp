/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1891
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1891
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
void test(val<long long int> var_0, val<signed char> var_1, val<long long int> var_2, val<unsigned long long int> var_3, val<short> var_4, val<int> var_5, val<unsigned long long int> var_7, val<unsigned int> var_8, val<unsigned long long int> var_9, val<unsigned int> var_10, val<long long int> var_13, val<short> var_14, val<signed char> var_15, val<int> zero, val<bool*> var_16, val<long long int*> var_17, val<short*> var_18, val<long long int*> var_19, val<signed char*> var_20) {
    *var_16 = ((/* implicit */val<bool>) var_15);
    if (((/* implicit */val<bool>) ((((max((((/* implicit */val<long long int>) var_14)), (var_0))) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_0) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))))))))) ? (((((var_0) != (var_2))) ? (var_13) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_1))))))) : (((/* implicit */val<long long int>) max((((/* implicit */val<int>) ((val<signed char>) var_14))), (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_1))))))))))
    {
        *var_17 = ((/* implicit */val<long long int>) var_10);
        *var_18 = ((/* implicit */val<short>) min((min((((/* implicit */val<unsigned long long int>) ((9071909905546975886LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4)))))), (((var_7) & (var_3))))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_15)))))));
        *var_19 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_9), (((/* implicit */val<unsigned long long int>) var_0))))) ? (((/* implicit */val<long long int>) (+(var_5)))) : (var_2)))) ? (((((/* implicit */val<bool>) (val<unsigned char>)185)) ? (12678702724164199041ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((var_4), (var_14))))))) : (((((/* implicit */val<bool>) min((var_10), (((/* implicit */val<unsigned int>) var_5))))) ? (min((((/* implicit */val<unsigned long long int>) var_1)), (var_9))) : (((/* implicit */val<unsigned long long int>) 1528472897U))))));
        *var_20 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)195)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) 2319571261232216857ULL)))) : (var_8)))) ? (((/* implicit */val<int>) (val<short>)-1628)) : ((+(2147483630)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9044993287604605980LL;
signed char var_1 = (signed char)99;
long long int var_2 = 1170730031407067108LL;
unsigned long long int var_3 = 51514569166956905ULL;
short var_4 = (short)-32471;
int var_5 = -911183851;
unsigned long long int var_7 = 8735357301730633359ULL;
unsigned int var_8 = 2380055111U;
unsigned long long int var_9 = 4913149420536883391ULL;
unsigned int var_10 = 3186734709U;
long long int var_13 = 8172016951375488811LL;
short var_14 = (short)29245;
signed char var_15 = (signed char)28;
int zero = 0;
bool var_16 = (bool)1;
long long int var_17 = -5370127901947280719LL;
short var_18 = (short)25728;
long long int var_19 = -4505756568797886248LL;
signed char var_20 = (signed char)72;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 3186734709LL;
    value_mismatch |= var_18 != (short)8201;
    value_mismatch |= var_19 != -5768041349545352575LL;
    value_mismatch |= var_20 != (signed char)-92;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
