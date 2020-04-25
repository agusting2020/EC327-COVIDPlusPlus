package com.example.mycovidfinanceapp.ui.home;

import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;

import java.util.Calendar;

public class HomeViewModel extends ViewModel {

    Calendar c = Calendar.getInstance();
    String[]monthName={"January","February","March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"};
    String month = monthName[c.get(Calendar.MONTH)];

    private MutableLiveData<String> mText;

    public HomeViewModel() {
        mText = new MutableLiveData<>();
        mText.setValue(month + " at a Glance");
    }

    public LiveData<String> getText() {
        return mText;
    }
}