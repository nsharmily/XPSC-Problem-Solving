void mhsol()
{
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v) cin >> it;
    int maxsum = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += v[j];
            if (sum % 2 == 0) maxsum = max(maxsum, j - i + 1);
        }
    }
    cout << maxsum << endl;
}