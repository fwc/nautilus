/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1508
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1508
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
void test(val<unsigned long long int> var_2, val<bool> var_5, val<unsigned long long int> var_7, val<unsigned long long int> var_8, val<bool> var_10, val<int> zero, val<bool*> var_11, val<unsigned short*> var_12, val<unsigned long long int*> var_13, val<bool*> var_14) {
    *var_11 = (val<bool>)1;
    *var_12 += ((/* implicit */val<unsigned short>) max((min((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) (val<bool>)1)), ((val<unsigned short>)28672)))), (min((((/* implicit */val<unsigned long long int>) 5959993682228912068LL)), (var_2))))), (min((((((/* implicit */val<unsigned long long int>) 5959993682228912080LL)) ^ (var_7))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)41147)) <= (((/* implicit */val<int>) var_5)))))))));
    *var_13 *= var_8;
    *var_14 = ((/* implicit */val<bool>) ((max((((/* implicit */val<unsigned long long int>) ((1392878608266805798LL) != (1946184598278725217LL)))), (((((/* implicit */val<unsigned long long int>) -5959993682228912092LL)) ^ (10488124371463682225ULL))))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17329395738483399988ULL;
bool var_5 = (bool)1;
unsigned long long int var_7 = 5683105998846829488ULL;
unsigned long long int var_8 = 16866754939712239450ULL;
bool var_10 = (bool)1;
int zero = 0;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)40433;
unsigned long long int var_13 = 7463296759735046397ULL;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned short)3569;
    value_mismatch |= var_13 != 8931000707513947122ULL;
    value_mismatch |= var_14 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
