package com.example.mycovidfinanceapp;

import android.content.Context;
import android.graphics.Color;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import com.google.android.material.bottomnavigation.BottomNavigationView;

import androidx.appcompat.app.AppCompatActivity;
import androidx.navigation.NavController;
import androidx.navigation.Navigation;
import androidx.navigation.ui.AppBarConfiguration;
import androidx.navigation.ui.NavigationUI;

import java.util.ArrayList;
import java.util.List;

import lecho.lib.hellocharts.model.PieChartData;
import lecho.lib.hellocharts.model.SliceValue;
import lecho.lib.hellocharts.view.PieChartView;

public class MainActivity extends AppCompatActivity {

    PieChartView pieChartView_monthly;
//    ListView listView;

//    String homeSummary[] = {"Checking", "Savings", "Credit"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

//        ListView listView = findViewById(R.id.HomeSummary);
//        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, R.layout.listview, R.id.textView, homeSummary);
//        listView.setAdapter(adapter);

//        pieChartView_monthly = findViewById(R.id.piechart_monthly);
//
//        List pieData;
//        pieData = new ArrayList<>();
//
//        pieData.add(new SliceValue(15, Color.BLUE).setLabel("Q1: $10"));
//        pieData.add(new SliceValue(25, Color.GRAY).setLabel("Q2: $4"));
//        pieData.add(new SliceValue(10, Color.RED).setLabel("Q3: $18"));
//        pieData.add(new SliceValue(60, Color.MAGENTA).setLabel("Q4: $28"));
//
//        PieChartData pieChartData = new PieChartData(pieData);
//        pieChartData.setHasLabels(true).setValueLabelTextSize(14);
//        pieChartData.setHasCenterCircle(true).setCenterText1("Sales in million").setCenterText1FontSize(20).setCenterText1Color(Color.parseColor("#0097A7"));
//        pieChartView_monthly.setPieChartData(pieChartData);

        BottomNavigationView navView = findViewById(R.id.nav_view);
        // Passing each menu ID as a set of Ids because each
        // menu should be considered as top level destinations.
        AppBarConfiguration appBarConfiguration = new AppBarConfiguration.Builder(
                R.id.navigation_home, R.id.navigation_accounts, R.id.navigation_budget, R.id.navigation_transactions, R.id.navigation_settings)
                .build();
        NavController navController = Navigation.findNavController(this, R.id.nav_host_fragment);
        NavigationUI.setupActionBarWithNavController(this, navController, appBarConfiguration);
        NavigationUI.setupWithNavController(navView, navController);

    }

}
