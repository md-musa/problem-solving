#include <iostream>
using namespace std;

int main() {
  string dummy;
  int h, hs, hr, m, ms, d, ds, s, ss;

  cin >> dummy >> d;
  cin >> h >> dummy >> m >> dummy >> s;
  cin >> dummy >> ds;
  cin >> hs >> dummy >> ms >> dummy >> ss;

  s = ss - s;
  m = ms - m;
  h = hs - h;
  d = ds - d;

  if (s < 0) {
    s += 60;
    m--;
  }

  if (m < 0) {
    m += 60;
    h--;
  }

  if (h < 0) {
    h += 24;
    d--;
  }
  cout << d << " dia(s)" << endl;
  cout << h << " hora(s)" << endl;
  cout << m << " minuto(s)" << endl;
  cout << s << " segundo(s)" << endl;

  return 0;
}