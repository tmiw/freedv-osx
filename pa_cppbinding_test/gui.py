# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Mar 17 2012)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class MainFrameBase
###########################################################################

class MainFrameBase ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = _(u"Test PortAudio CPP Binding "), pos = wx.DefaultPosition, size = wx.Size( 577,365 ), style = wx.DEFAULT_FRAME_STYLE|wx.RESIZE_BORDER|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		self.m_menuBar = wx.MenuBar( 0 )
		self.m_menuFile = wx.Menu()
		self.menuFileExit = wx.MenuItem( self.m_menuFile, wx.ID_EXIT, _(u"E&xit")+ u"\t" + u"Alt+X", wx.EmptyString, wx.ITEM_NORMAL )
		self.m_menuFile.AppendItem( self.menuFileExit )
		
		self.m_menuBar.Append( self.m_menuFile, _(u"&File") ) 
		
		self.SetMenuBar( self.m_menuBar )
		
		mainSizer = wx.BoxSizer( wx.VERTICAL )
		
		self.m_audioInfo = wx.Panel( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		self.m_audioInfo.SetMinSize( wx.Size( 65,65 ) )
		
		bSizer17 = wx.BoxSizer( wx.VERTICAL )
		
		bSizer15 = wx.BoxSizer( wx.VERTICAL )
		
		bSizer9 = wx.BoxSizer( wx.VERTICAL )
		
		bSizer7 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer2 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer2.SetMinSize( wx.Size( 65,65 ) ) 
		m_comboBoxLeftChoices = []
		self.m_comboBoxLeft = wx.ComboBox( self.m_audioInfo, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_comboBoxLeftChoices, 0 )
		self.m_comboBoxLeft.SetToolTipString( _(u"Input Audio Interface") )
		self.m_comboBoxLeft.SetMinSize( wx.Size( 65,65 ) )
		
		bSizer2.Add( self.m_comboBoxLeft, 1, wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer7.Add( bSizer2, 1, wx.EXPAND, 5 )
		
		bSizer3 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer3.SetMinSize( wx.Size( 65,65 ) ) 
		m_comboBoxRightChoices = []
		self.m_comboBoxRight = wx.ComboBox( self.m_audioInfo, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_comboBoxRightChoices, 0 )
		self.m_comboBoxRight.SetToolTipString( _(u"Output Audio Interface") )
		self.m_comboBoxRight.SetMinSize( wx.Size( 65,35 ) )
		
		bSizer3.Add( self.m_comboBoxRight, 1, wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer7.Add( bSizer3, 1, wx.EXPAND, 5 )
		
		
		bSizer9.Add( bSizer7, 1, wx.EXPAND, 5 )
		
		
		bSizer15.Add( bSizer9, 0, wx.ALIGN_CENTER_VERTICAL|wx.EXPAND, 5 )
		
		bSizer10 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer5 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_gauge1 = wx.Gauge( self.m_audioInfo, wx.ID_ANY, 100, wx.DefaultPosition, wx.DefaultSize, wx.GA_HORIZONTAL|wx.GA_SMOOTH )
		bSizer5.Add( self.m_gauge1, 1, wx.ALL, 5 )
		
		
		bSizer10.Add( bSizer5, 1, wx.EXPAND, 5 )
		
		bSizer6 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_slider1 = wx.Slider( self.m_audioInfo, wx.ID_ANY, 50, 0, 100, wx.DefaultPosition, wx.DefaultSize, wx.SL_AUTOTICKS|wx.SL_HORIZONTAL|wx.SL_SELRANGE|wx.SL_TOP )
		bSizer6.Add( self.m_slider1, 1, wx.ALIGN_CENTER|wx.ALL|wx.EXPAND, 5 )
		
		
		bSizer10.Add( bSizer6, 1, wx.EXPAND, 5 )
		
		
		bSizer15.Add( bSizer10, 1, wx.EXPAND, 5 )
		
		bSizer14 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer13 = wx.BoxSizer( wx.HORIZONTAL )
		
		bSizer12 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_toggleBtn3 = wx.ToggleButton( self.m_audioInfo, wx.ID_ANY, _(u"On / Off"), wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer12.Add( self.m_toggleBtn3, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		
		bSizer13.Add( bSizer12, 1, 0, 5 )
		
		bSizer11 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_toggleBtn2 = wx.ToggleButton( self.m_audioInfo, wx.ID_ANY, _(u"On / Off"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_toggleBtn2.SetValue( True ) 
		bSizer11.Add( self.m_toggleBtn2, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_LEFT|wx.ALL, 5 )
		
		
		bSizer13.Add( bSizer11, 1, 0, 5 )
		
		
		bSizer14.Add( bSizer13, 1, wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT, 5 )
		
		
		bSizer15.Add( bSizer14, 0, wx.EXPAND, 5 )
		
		
		bSizer17.Add( bSizer15, 1, wx.EXPAND, 5 )
		
		bSizer16 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_button1 = wx.Button( self.m_audioInfo, wx.ID_ANY, _(u"Exit"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_button1.SetDefault() 
		bSizer16.Add( self.m_button1, 0, 0, 5 )
		
		
		bSizer17.Add( bSizer16, 0, wx.ALIGN_BOTTOM|wx.ALIGN_RIGHT, 5 )
		
		
		self.m_audioInfo.SetSizer( bSizer17 )
		self.m_audioInfo.Layout()
		bSizer17.Fit( self.m_audioInfo )
		mainSizer.Add( self.m_audioInfo, 1, wx.EXPAND, 0 )
		
		
		self.SetSizer( mainSizer )
		self.Layout()
		self.m_statusBar = self.CreateStatusBar( 1, wx.ST_SIZEGRIP, wx.ID_ANY )
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Bind( wx.EVT_CLOSE, self.OnCloseFrame )
		self.Bind( wx.EVT_MENU, self.OnExitClick, id = self.menuFileExit.GetId() )
		self.m_comboBoxLeft.Bind( wx.EVT_COMBOBOX, self.OnComboLeft )
		self.m_comboBoxRight.Bind( wx.EVT_COMBOBOX, self.OnComboRight )
		self.m_slider1.Bind( wx.EVT_SCROLL, self.OnScroll )
		self.m_toggleBtn3.Bind( wx.EVT_TOGGLEBUTTON, self.OnTogRight )
		self.m_toggleBtn2.Bind( wx.EVT_TOGGLEBUTTON, self.OnTogLeft )
		self.m_button1.Bind( wx.EVT_BUTTON, self.OnExitClick )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def OnCloseFrame( self, event ):
		event.Skip()
	
	def OnExitClick( self, event ):
		event.Skip()
	
	def OnComboLeft( self, event ):
		event.Skip()
	
	def OnComboRight( self, event ):
		event.Skip()
	
	def OnScroll( self, event ):
		event.Skip()
	
	def OnTogRight( self, event ):
		event.Skip()
	
	def OnTogLeft( self, event ):
		event.Skip()
	
	

