package com.example.myapplication

import android.content.ContentProvider
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        var t2 = Toast.makeText(this, "onCreate is running",Toast.LENGTH_SHORT)
        t2.show()
        var btl  = BTL()
       button.setOnClickListener(btl)
        button2.setOnClickListener(btl)
        button3.setOnClickListener(btl)


    }
    inner class BTL : View.OnClickListener{
        override fun onClick(v: View?) {
            when(v?.id){
                R.id.button-> textView.text="1"
                R.id.button2-> textView.text="2"
                R.id.button3-> textView.text="3"
            }
        }

    }
    override fun onStart() {
        super.onStart()
        var t1 = Toast.makeText(this,"onStart is running",Toast.LENGTH_SHORT)
        t1.show()
    }

    override fun onResume() {
        super.onResume()
        var t1 = Toast.makeText(this, "onResume is running",Toast.LENGTH_SHORT)
        t1.show()
    }

    override fun onPause() {
        super.onPause()
        var t1 = Toast.makeText(this, "onPause is running",Toast.LENGTH_SHORT)
        t1.show()
    }

    override fun onStop() {
        super.onStop()
        var t1 = Toast.makeText(this, "onStop is running",Toast.LENGTH_SHORT)
        t1.show()
    }

    override fun onDestroy() {
        super.onDestroy()
        var t1 = Toast.makeText(this, "onDestory is running",Toast.LENGTH_SHORT)
        t1.show()
    }

    override fun onRestart() {
        super.onRestart()
        var t1 = Toast.makeText(this, "onRestart is running",Toast.LENGTH_SHORT)
        t1.show()
    }

}