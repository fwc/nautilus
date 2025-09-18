/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8894
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8894
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
void test(val<long long int> var_1, val<unsigned short> var_4, val<bool> var_6, val<unsigned char> var_7, val<unsigned char> var_8, val<int> zero, val<long long int*> var_10, val<unsigned long long int*> var_11, val<unsigned char*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<long long int>) var_4);
    *var_11 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 5609129983484362868ULL)) ? ((-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_7)) != (((/* implicit */val<int>) var_8))))))) : (((/* implicit */val<int>) ((val<bool>) var_8)))));
    *var_12 &= ((/* implicit */val<unsigned char>) ((var_1) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_8)))));
    *var_13 += ((/* implicit */val<long long int>) ((((12837614090225188748ULL) * (12837614090225188747ULL))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1350617674335994116LL;
unsigned short var_4 = (unsigned short)47205;
bool var_6 = (bool)0;
unsigned char var_7 = (unsigned char)93;
unsigned char var_8 = (unsigned char)147;
int zero = 0;
long long int var_10 = 7576142090316772691LL;
unsigned long long int var_11 = 5162834341476030570ULL;
unsigned char var_12 = (unsigned char)240;
long long int var_13 = 1001516045646012437LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 47205LL;
    value_mismatch |= var_11 != 5162834341476030569ULL;
    value_mismatch |= var_12 != (unsigned char)96;
    value_mismatch |= var_13 != 1001516045646012437LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
}
