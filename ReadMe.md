## 說明 ##
一位狙擊手收到關於目標的位置的可靠消息，請幫她判斷目前能否擊中目標的可能性<br>
狙擊步槍的有效射程為`r`，目標與狙擊手所在位置東西向座標差`x`、南北向座標差`y`。<br>
<b>輸入3整數依序為`r,x,y`</b> 
當與目標距離小於等於有效射程的一半時，訓練有素的狙擊手能夠有信心地擊中目標，此時輸出為`ideal`<br>
當與目標距離大於有效射程的一半時但還在有效射程時，輸出為`difficult`<br>
當與目標距離大於有效射程時，輸出為`out of range`<br>
## Input Format ##
三個以空白隔開的整數 r,x,y

## Output Format ##

判斷結果 ( ideal / diffilcult / out of range )

## Sample Input ##
```
300 100 200
```
## Sample Output ##
```
difficlut
```
