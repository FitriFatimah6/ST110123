#include <iostream>
using namespace std;

int main() {
    int A1_hour, A1_minute, A1_second;
    int A2_hour, A2_minute, A2_second;
    int duration_hour, duration_minute, duration_second;
    int total_duration_in_seconds;
    double total_cost;

    // Input waktu mulai (A1)
    cout << "Masukkan waktu mulai (jam menit detik): ";
    cin >> A1_hour >> A1_minute >> A1_second;

    // Input waktu berakhir (A2)
    cout << "Masukkan waktu berakhir (jam menit detik): ";
    cin >> A2_hour >> A2_minute >> A2_second;

    // Menghitung durasi penggunaan dalam detik
    total_duration_in_seconds = (A2_hour - A1_hour) * 3600 + (A2_minute - A1_minute) * 60 + (A2_second - A1_second);

    // Menghitung durasi penggunaan dalam jam, menit, dan detik
    duration_hour = total_duration_in_seconds / 3600;
    duration_minute = (total_duration_in_seconds % 3600) / 60;
    duration_second = (total_duration_in_seconds % 3600) % 60;

    // Menghitung biaya total yang harus dibayar
    total_cost = total_duration_in_seconds / 3600.0 * 5000;

    // Menampilkan durasi penggunaan dan biaya total
    cout << "Durasi penggunaan: " << duration_hour << " jam, " << duration_minute << " menit, " <<duration_second << " detik" << endl;
    cout << "Biaya total: Rp" << total_cost << endl;

    return 0;
}