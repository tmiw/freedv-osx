<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Declare Sub fdmdv2-dll Lib "\Users\wittend\Projects\Radio\fdmdv2\fdmdv2dll\Release\fdmdv2-dll.dll" (ByVal Client As String, ByVal Dll As String)
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
Me.TextBox1 = New System.Windows.Forms.TextBox()
Me.GroupBox1 = New System.Windows.Forms.GroupBox()
Me.Button1 = New System.Windows.Forms.Button()
Me.Button2 = New System.Windows.Forms.Button()
Me.Button3 = New System.Windows.Forms.Button()
Me.Button4 = New System.Windows.Forms.Button()
Me.Button5 = New System.Windows.Forms.Button()
Me.GroupBox1.SuspendLayout()
Me.SuspendLayout()
'
'TextBox1
'
Me.TextBox1.Location = New System.Drawing.Point(183, 2)
Me.TextBox1.Multiline = True
Me.TextBox1.Name = "TextBox1"
Me.TextBox1.Size = New System.Drawing.Size(384, 395)
Me.TextBox1.TabIndex = 0
'
'GroupBox1
'
Me.GroupBox1.Controls.Add(Me.Button4)
Me.GroupBox1.Controls.Add(Me.Button3)
Me.GroupBox1.Controls.Add(Me.Button2)
Me.GroupBox1.Controls.Add(Me.Button1)
Me.GroupBox1.Location = New System.Drawing.Point(10, 10)
Me.GroupBox1.Name = "GroupBox1"
Me.GroupBox1.Size = New System.Drawing.Size(167, 337)
Me.GroupBox1.TabIndex = 1
Me.GroupBox1.TabStop = False
Me.GroupBox1.Text = "Test FDMDV2"
'
'Button1
'
Me.Button1.Location = New System.Drawing.Point(17, 31)
Me.Button1.Name = "Button1"
Me.Button1.Size = New System.Drawing.Size(135, 24)
Me.Button1.TabIndex = 0
Me.Button1.Text = "Load"
Me.Button1.UseVisualStyleBackColor = True
'
'Button2
'
Me.Button2.Location = New System.Drawing.Point(17, 61)
Me.Button2.Name = "Button2"
Me.Button2.Size = New System.Drawing.Size(135, 27)
Me.Button2.TabIndex = 1
Me.Button2.Text = "Start"
Me.Button2.UseVisualStyleBackColor = True
'
'Button3
'
Me.Button3.Location = New System.Drawing.Point(17, 94)
Me.Button3.Name = "Button3"
Me.Button3.Size = New System.Drawing.Size(135, 24)
Me.Button3.TabIndex = 2
Me.Button3.Text = "Stop"
Me.Button3.UseVisualStyleBackColor = True
'
'Button4
'
Me.Button4.Location = New System.Drawing.Point(17, 124)
Me.Button4.Name = "Button4"
Me.Button4.Size = New System.Drawing.Size(135, 24)
Me.Button4.TabIndex = 3
Me.Button4.Text = "Unload"
Me.Button4.UseVisualStyleBackColor = True
'
'Button5
'
Me.Button5.Location = New System.Drawing.Point(27, 356)
Me.Button5.Name = "Button5"
Me.Button5.Size = New System.Drawing.Size(135, 24)
Me.Button5.TabIndex = 2
Me.Button5.Text = "Quit"
Me.Button5.UseVisualStyleBackColor = True
'
'Form1
'
Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
Me.ClientSize = New System.Drawing.Size(568, 392)
Me.Controls.Add(Me.Button5)
Me.Controls.Add(Me.GroupBox1)
Me.Controls.Add(Me.TextBox1)
Me.Name = "Form1"
Me.Text = "Test FDMDV2.dll"
Me.GroupBox1.ResumeLayout(False)
Me.ResumeLayout(False)
Me.PerformLayout()

End Sub
    Friend WithEvents TextBox1 As System.Windows.Forms.TextBox
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents Button4 As System.Windows.Forms.Button
    Friend WithEvents Button3 As System.Windows.Forms.Button
    Friend WithEvents Button2 As System.Windows.Forms.Button
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents Button5 As System.Windows.Forms.Button

End Class
