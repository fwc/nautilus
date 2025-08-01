/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 18
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=18
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
void test(val<bool> var_0, val<unsigned long long int> var_2, val<bool> var_5, val<bool> var_7, val<long long int> var_9, val<int> zero, val<short*> var_10, val<unsigned char*> var_11, val<unsigned long long int*> var_12, val<unsigned short*> var_13, val<signed char*> var_14) {
    *var_10 *= ((/* implicit */val<short>) var_0);
    *var_11 -= ((/* implicit */val<unsigned char>) var_5);
    *var_12 = ((/* implicit */val<unsigned long long int>) min((var_9), (((/* implicit */val<long long int>) ((1181351430) | (1181351420))))));
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned int>) 1181351416)) + (3891083961U)));
    *var_14 = ((/* implicit */val<signed char>) max((var_14), (((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((var_7) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0)))) == (((/* implicit */val<int>) var_5)))))) - (var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_2 = 4006434638404872431ULL;
bool var_5 = (bool)1;
bool var_7 = (bool)1;
long long int var_9 = -5621855351336873626LL;
int zero = 0;
short var_10 = (short)-21624;
unsigned char var_11 = (unsigned char)175;
unsigned long long int var_12 = 14987533661593098950ULL;
unsigned short var_13 = (unsigned short)55931;
signed char var_14 = (signed char)-60;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-21624;
    value_mismatch |= var_11 != (unsigned char)174;
    value_mismatch |= var_12 != 12824888722372677990ULL;
    value_mismatch |= var_13 != (unsigned short)14513;
    value_mismatch |= var_14 != (signed char)18;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
