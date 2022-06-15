# c_fatec_ed_sort
Implementação de algoritmos de ordenação Insertion Sort e Bubble Sort em C, comparação do tempo de ordenação entre as duas técnicas.

<html>
<body>

<h1>Comparação do tempo de execução entre algoritmos de ordenação em C</h1>

<h2>Análise</h2>
&nbsp&nbsp&nbsp&nbspA partir dos dados coletados, observa-se que o método de ordenação Insertion concluiu mais rapidamente a ordenação dos vetores em todos os cenários. A complexidade dos dois métodos é semelhante (o tempo de ordenação aumenta exponencialmente conforme o tamanho do vetor aumenta), já que há um laço de repetição dentro de outro no código em ambos os casos. Bubble faz mais comparações, aproximadamente j²/2 iterações (em que j é o número de elementos do vetor), enquanto Insertion faz aproximadamente j²/4 iterações.<br>
&nbsp&nbsp&nbsp&nbspPara testar o algoritmo, o programa em C foi executado 3 vezes para cada tamanho de vetor supracitado e média do tempo de execução foi calculada.<br>
&nbsp&nbsp&nbsp&nbspDessa forma, é possível concluir que estes dois algoritmos são indicados para menores conjuntos de dados. Além disso, apesar de um pouco mais complexo, nas situações descritas, Insertion é mais eficaz.

<h2>Resultados Obtidos</h2>

<h3>Visualização gráfica</h3>
<figure>
<img src="https://user-images.githubusercontent.com/100382267/172521341-52e04c71-0f3e-468b-8ee7-446caa702da0.jpg" height="600" alt="Comparação do tempo de execução dos algoritmos de ordenação implementados (Bubble e Insertion)">
<figcaption><i>Gráfico plotado a partir dos dados obtidos.</i></figcaption>
</figure>
  
<h3>Tabulação</h3>
<h4>Média de tempo de ordenação por algoritmo de ordenação</h4>
<table cellspacing="0" border="0">
	<colgroup span="3" width="64"></colgroup>
	<tr>
		<td style="border-bottom: 1px solid #000000" colspan=3 height="20" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		</tr>
	<tr>
		<td style="border-top: 1px solid #000000; border-bottom: 2px solid #000000" colspan=3 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">v[ ]</font></b></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000">Bubble</font></b></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000">Insertion</font></b></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="50000" sdnum="1033;"><b><font face="Arial" color="#000000">50000</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="5.3" sdnum="1033;"><font face="Arial" color="#000000">5.3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1.6" sdnum="1033;"><font face="Arial" color="#000000">1.6</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="100000" sdnum="1033;"><b><font face="Arial" color="#000000">100000</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="25" sdnum="1033;"><font face="Arial" color="#000000">25</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="7" sdnum="1033;"><font face="Arial" color="#000000">7</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="200000" sdnum="1033;"><b><font face="Arial" color="#000000">200000</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="114.3" sdnum="1033;"><font face="Arial" color="#000000">114.3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="26" sdnum="1033;"><font face="Arial" color="#000000">26</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="400000" sdnum="1033;"><b><font face="Arial" color="#000000">400000</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="470" sdnum="1033;"><font face="Arial" color="#000000">470</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="105.3" sdnum="1033;"><font face="Arial" color="#000000">105.3</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="800000" sdnum="1033;"><b><font face="Arial" color="#000000">800000</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1798.3" sdnum="1033;"><font face="Arial" color="#000000">1798.3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="404.6" sdnum="1033;"><font face="Arial" color="#000000">404.6</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="1600000" sdnum="1033;"><b><font face="Arial" color="#000000">1600000</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="6724" sdnum="1033;"><font face="Arial" color="#000000">6724</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1462.3" sdnum="1033;"><font face="Arial" color="#000000">1462.3</font></td>
	</tr>
</table>

<h4>Visualização geral do tempo de ordenação por algoritmo de ordenação</h4>
<table cellspacing="0" border="0">
	<colgroup width="67"></colgroup>
	<colgroup width="109"></colgroup>
	<colgroup span="2" width="102"></colgroup>
	<tr>
		<td style="border-bottom: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><b><font face="Arial" color="#000000">Resultados Obtidos</font></b></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" colspan=2 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" colspan=2 align="center" valign=middle><b><font face="Arial" color="#000000">Tempo (s)</font></b></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">v[ ]</font></b></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000">Execu&ccedil;&atilde;o #</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000">Bubble</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000">Insertion</font></b></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="50000" sdnum="1033;"><font face="Arial" color="#000000">50000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="6" sdnum="1033;"><font face="Arial" color="#000000">6</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="50000" sdnum="1033;"><font face="Arial" color="#000000">50000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="5" sdnum="1033;"><font face="Arial" color="#000000">5</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="50000" sdnum="1033;"><font face="Arial" color="#000000">50000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="3" sdnum="1033;"><font face="Arial" color="#000000">3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="5" sdnum="1033;"><font face="Arial" color="#000000">5</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000"><br></font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="5.333333333" sdnum="1033;"><b><font face="Arial" color="#000000">5.333333333</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1.666666667" sdnum="1033;"><b><font face="Arial" color="#000000">1.666666667</font></b></td>
	</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="100000" sdnum="1033;"><font face="Arial" color="#000000">100000</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="25" sdnum="1033;"><font face="Arial" color="#000000">25</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="7" sdnum="1033;"><font face="Arial" color="#000000">7</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="100000" sdnum="1033;"><font face="Arial" color="#000000">100000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="26" sdnum="1033;"><font face="Arial" color="#000000">26</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="7" sdnum="1033;"><font face="Arial" color="#000000">7</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="100000" sdnum="1033;"><font face="Arial" color="#000000">100000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="3" sdnum="1033;"><font face="Arial" color="#000000">3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="24" sdnum="1033;"><font face="Arial" color="#000000">24</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="7" sdnum="1033;"><font face="Arial" color="#000000">7</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000"><br></font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="25" sdnum="1033;"><b><font face="Arial" color="#000000">25</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="7" sdnum="1033;"><b><font face="Arial" color="#000000">7</font></b></td>
	</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="200000" sdnum="1033;"><font face="Arial" color="#000000">200000</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="114" sdnum="1033;"><font face="Arial" color="#000000">114</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="26" sdnum="1033;"><font face="Arial" color="#000000">26</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="200000" sdnum="1033;"><font face="Arial" color="#000000">200000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="114" sdnum="1033;"><font face="Arial" color="#000000">114</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="26" sdnum="1033;"><font face="Arial" color="#000000">26</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="200000" sdnum="1033;"><font face="Arial" color="#000000">200000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="3" sdnum="1033;"><font face="Arial" color="#000000">3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="115" sdnum="1033;"><font face="Arial" color="#000000">115</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="26" sdnum="1033;"><font face="Arial" color="#000000">26</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000"><br></font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="114.3333333" sdnum="1033;"><b><font face="Arial" color="#000000">114.3333333</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="26" sdnum="1033;"><b><font face="Arial" color="#000000">26</font></b></td>
	</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="400000" sdnum="1033;"><font face="Arial" color="#000000">400000</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="469" sdnum="1033;"><font face="Arial" color="#000000">469</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="106" sdnum="1033;"><font face="Arial" color="#000000">106</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="400000" sdnum="1033;"><font face="Arial" color="#000000">400000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="471" sdnum="1033;"><font face="Arial" color="#000000">471</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="105" sdnum="1033;"><font face="Arial" color="#000000">105</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="400000" sdnum="1033;"><font face="Arial" color="#000000">400000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="3" sdnum="1033;"><font face="Arial" color="#000000">3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="470" sdnum="1033;"><font face="Arial" color="#000000">470</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="105" sdnum="1033;"><font face="Arial" color="#000000">105</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000"><br></font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="470" sdnum="1033;"><b><font face="Arial" color="#000000">470</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="105.3333333" sdnum="1033;"><b><font face="Arial" color="#000000">105.3333333</font></b></td>
	</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="800000" sdnum="1033;"><font face="Arial" color="#000000">800000</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1828" sdnum="1033;"><font face="Arial" color="#000000">1828</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="408" sdnum="1033;"><font face="Arial" color="#000000">408</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="800000" sdnum="1033;"><font face="Arial" color="#000000">800000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1822" sdnum="1033;"><font face="Arial" color="#000000">1822</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="409" sdnum="1033;"><font face="Arial" color="#000000">409</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="800000" sdnum="1033;"><font face="Arial" color="#000000">800000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="3" sdnum="1033;"><font face="Arial" color="#000000">3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1745" sdnum="1033;"><font face="Arial" color="#000000">1745</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="397" sdnum="1033;"><font face="Arial" color="#000000">397</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000"><br></font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1798.333333" sdnum="1033;"><b><font face="Arial" color="#000000">1798.333333</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="404.6666667" sdnum="1033;"><b><font face="Arial" color="#000000">404.6666667</font></b></td>
	</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000" colspan=4 height="21" align="center" valign=middle><font color="#000000"><br></font></td>
		</tr>
	<tr>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="1600000" sdnum="1033;"><font face="Arial" color="#000000">1600000</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1" sdnum="1033;"><font face="Arial" color="#000000">1</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="6842" sdnum="1033;"><font face="Arial" color="#000000">6842</font></td>
		<td style="border-top: 2px solid #000000; border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1438" sdnum="1033;"><font face="Arial" color="#000000">1438</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="1600000" sdnum="1033;"><font face="Arial" color="#000000">1600000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="2" sdnum="1033;"><font face="Arial" color="#000000">2</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="6710" sdnum="1033;"><font face="Arial" color="#000000">6710</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1426" sdnum="1033;"><font face="Arial" color="#000000">1426</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle sdval="1600000" sdnum="1033;"><font face="Arial" color="#000000">1600000</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="3" sdnum="1033;"><font face="Arial" color="#000000">3</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="6620" sdnum="1033;"><font face="Arial" color="#000000">6620</font></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1523" sdnum="1033;"><font face="Arial" color="#000000">1523</font></td>
	</tr>
	<tr>
		<td style="border-bottom: 2px solid #000000; border-left: 2px solid #000000; border-right: 2px solid #000000" height="21" align="center" valign=middle><b><font face="Arial" color="#000000">M&eacute;dia</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle><b><font face="Arial" color="#000000"><br></font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="6724" sdnum="1033;"><b><font face="Arial" color="#000000">6724</font></b></td>
		<td style="border-bottom: 2px solid #000000; border-right: 2px solid #000000" align="center" valign=middle sdval="1462.333333" sdnum="1033;"><b><font face="Arial" color="#000000">1462.333333</font></b></td>
	</tr>
</table>

</body>
</html>
