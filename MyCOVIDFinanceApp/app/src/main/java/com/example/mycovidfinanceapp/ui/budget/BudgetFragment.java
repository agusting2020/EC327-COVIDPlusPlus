package com.example.mycovidfinanceapp.ui.budget;

import android.os.Bundle;
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

public class BudgetFragment extends Fragment {

    private BudgetViewModel budgetViewModel;

    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        budgetViewModel =
                ViewModelProviders.of(this).get(BudgetViewModel.class);
        View root = inflater.inflate(R.layout.fragment_budget, container, false);
        final TextView textView = root.findViewById(R.id.text_budget);
        budgetViewModel.getText().observe(getViewLifecycleOwner(), new Observer<String>() {
            @Override
            public void onChanged(@Nullable String s) {
                textView.setText(s);
            }
        });
        return root;
    }
}