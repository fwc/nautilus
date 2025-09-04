/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7238
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7238
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
void test(val<bool> var_1, val<unsigned long long int> var_2, val<unsigned short> var_3, val<unsigned short> var_4, val<unsigned short> var_5, val<bool> var_6, val<unsigned short> var_8, val<unsigned char> var_9, val<unsigned char> var_10, val<int> zero, val<int*> var_11, val<int*> var_12, val<int*> var_13, val<int*> var_14) {
    *var_11 = max((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned char>) var_1)), (var_10)))), (var_3)))), (min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))), ((+(2147483647))))));
    *var_12 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) var_4)), (min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (((/* implicit */val<int>) (val<short>)-32758)) : (((/* implicit */val<int>) var_5))))), (var_2)))));
    *var_13 = ((/* implicit */val<int>) max((*var_13), (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) max(((-(((/* implicit */val<int>) var_3)))), (((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_8))))))) >= (min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) ^ (var_2))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_8))))))))))));
    *var_14 = ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_2 = 4409012213357966293ULL;
unsigned short var_3 = (unsigned short)59271;
unsigned short var_4 = (unsigned short)62492;
unsigned short var_5 = (unsigned short)57825;
bool var_6 = (bool)1;
unsigned short var_8 = (unsigned short)37872;
unsigned char var_9 = (unsigned char)107;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
int var_11 = 76242715;
int var_12 = 1600122161;
int var_13 = -395349273;
int var_14 = 18366684;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != -2087750699;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
