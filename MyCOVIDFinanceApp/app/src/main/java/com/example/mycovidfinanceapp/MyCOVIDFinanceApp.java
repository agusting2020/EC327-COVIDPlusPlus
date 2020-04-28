package com.example.mycovidfinanceapp;

import android.app.Application;
import android.content.Context;
import io.realm.RealmConfiguration;
import io.realm.Realm;

public class MyCOVIDFinanceApp extends Application {
    public void onCreate() {
        super.onCreate();
        Realm.init(this);
        RealmConfiguration realmConfig = new RealmConfiguration.Builder()
                .name("MyCOVIDFinanceApp.realm")
                .schemaVersion(0)
                .build();
        Realm.setDefaultConfiguration(realmConfig);
    }
}
