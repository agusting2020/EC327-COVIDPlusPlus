package com.example.mycovidfinanceapp.ui.budget;

import android.graphics.Color;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.Observer;
import androidx.lifecycle.ViewModelProviders;

import com.example.mycovidfinanceapp.R;
import com.github.mikephil.charting.charts.PieChart;
import com.github.mikephil.charting.data.Entry;
import com.github.mikephil.charting.data.PieData;
import com.github.mikephil.charting.data.PieDataSet;
import com.github.mikephil.charting.data.PieEntry;
import com.github.mikephil.charting.highlight.Highlight;
import com.github.mikephil.charting.listener.OnChartValueSelectedListener;
import com.github.mikephil.charting.utils.ColorTemplate;

import java.util.ArrayList;
import java.util.List;

public class BudgetFragment extends Fragment implements OnChartValueSelectedListener {

    private BudgetViewModel budgetViewModel;

    public View onCreateView(@NonNull LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        budgetViewModel = ViewModelProviders.of(this).get(BudgetViewModel.class);
        View root = inflater.inflate(R.layout.fragment_budget, container, false);

        PieDataSet pieDataSet;
        PieData pieData;


        List<PieEntry> Values = new ArrayList<>();
        Values.add(new PieEntry(80f, 0));
        Values.add(new PieEntry(50f, 1));
        Values.add(new PieEntry(20f, 2));
        Values.add(new PieEntry(75f, 3));

        List<String> Category = new ArrayList<>();
        Category.add("Category 1");
        Category.add("Category 2");
        Category.add("Category 3");
        Category.add("Category 4");

        pieDataSet = new PieDataSet(Values, "Categorical Spending");

        pieData = new PieData(pieDataSet);

        PieChart pieChart = root.findViewById(R.id.piechart);

        pieChart.setData(pieData);

        pieChart.getDescription().setText("");

        pieChart.setDrawHoleEnabled(true);
        pieChart.setTransparentCircleRadius(25f);
        pieChart.setHoleRadius(50f);

        pieDataSet.setColors(ColorTemplate.VORDIPLOM_COLORS);
        pieData.setValueTextSize(13f);
        pieData.setValueTextColor(Color.BLACK);
        pieChart.setOnChartValueSelectedListener(this);

        pieChart.animateXY(1400, 1400);

        return root;
    }

    @Override
    public void onValueSelected(Entry e, Highlight h) {
        if (e == null)
            return;
        Log.i("VAL SELECTED", "Value: " + e.getY() + ", xIndex: " + e.getX());
    }


    @Override
    public void onNothingSelected() {
        Log.i("PieChart", "nothing selected");
    }
}